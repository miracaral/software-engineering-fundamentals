import mediapipe as mp
import cv2 as cv

cap = cv.VideoCapture(0)

mpHand = mp.solutions.hands
hands = mpHand.Hands()
mpDraw = mp.solutions.drawing_utils

tipIDs = [4, 8 , 12 , 16 ,20] #tips of the fingers
pipIDs = [2 , 6 , 10 , 14 , 18] #pips of the fingers

while True:

    success , video = cap.read()
    videoRGB = cv.cvtColor(video , cv.COLOR_BGR2RGB)

    results = hands.process(videoRGB)
    #print(results.multi_hand_landmarks)

    lmList = []
    if results.multi_hand_landmarks:
        for handLms in results.multi_hand_landmarks:
            mpDraw.draw_landmarks(video , handLms ,mpHand.HAND_CONNECTIONS)

            for id, lm in enumerate(handLms.landmark):
                h, w , _ = video.shape #dont need color so we declare color as _. 
                cx , cy = int(lm.x * w) , int(lm.y * h) 
                lmList.append([id,cx,cy])  #to see coordinates of every part of the finger. you can check it with print(lmList)

        if len(lmList) != 0: #if there is a hand on the camera
            fingers = []  #0-thumb 1-index 2-middle 3-ring 4-pinky
            
            #only for thumb finger
            if lmList[tipIDs[0]][1] > lmList[pipIDs[0]][1]: 
                #This will only work for right hand. If you want to make it for left hand you should change `>` to `<`
                #Make it work for both hands. 
                fingers.append(1)
            else:
                fingers.append(0)
            #since thumb does not work correctly on this code we seperated it from this control. 
            for id in range(1, 5): #other 4 finger
                if lmList[tipIDs[id]][2] < lmList[pipIDs[id]][2]: #it checks if the tip of your finger below the pip of same finger.
                    fingers.append(1)
                else:
                    fingers.append(0)
            totalF = fingers.count(1) #counts the fingers.
            #print(totalF)
            cv.putText(video, str(totalF) , (30,125), cv.FONT_HERSHEY_PLAIN , 10 , (255,0,0) , 8)

    cv.imshow('video',video)
    cv.waitKey(1)