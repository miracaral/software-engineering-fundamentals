import mediapipe as mp

import cv2 

cap = cv2.VideoCapture(0)

mpHand = mp.solutions.hands
hands = mpHand.Hands()
mpDraw = mp.solutions.drawing_utils
#To achieve nah, important dots are 4,5 and 9. 
while True:
    success , video = cap.read()
    videoRGB = cv2.cvtColor(video, cv2.COLOR_BGR2RGB)

    results = hands.process(videoRGB)
    lmList = []
    if results.multi_hand_landmarks:
            for handLms in results.multi_hand_landmarks:
                mpDraw.draw_landmarks(video, handLms , mpHand.HAND_CONNECTIONS)



            for id , lm in enumerate(handLms.landmark):
                h , w , _ = video.shape
                cx , cy = int(lm.x * w) , int(lm.y * h)
                lmList.append([id,cx,cy])
            
            if lmList:
                #We check if thumb top is higher than index_mcp and middle_mcp and if thumb top is between index_mcp and middle_mcp
                if (lmList[4][2] > lmList[5][2]) and (lmList[4][2] > lmList[9][2])  and  (lmList[4][1] < lmList[9][1]) and (lmList[4][1] > lmList[5][1]) :
                    cv2.putText(video , 'Nah cekiyor' , (10, 30) , cv2.FONT_HERSHEY_SIMPLEX , 1 , (255, 0 , 0) , 3 )

                
    cv2.imshow('video', video)
    if cv2.waitKey(1) & 0xFF == 27:
        break

cap.release()
cv2.destroyAllWindows()