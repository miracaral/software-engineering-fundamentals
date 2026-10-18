import mediapipe as mp
import cv2
import time

mpHand = mp.solutions.hands
hands = mpHand.Hands()
mpDraw = mp.solutions.drawing_utils

tip_ids = [4,8,12,16,20]
pip_ids = [2,6,10,14,18]

cap = cv2.VideoCapture(0)

while True:
    _ , img =cap.read()

    #cv2 da BGR formati alinan goruntuyu RGB ye cevirir!!
    img_rgb = cv2.cvtColor(img , cv2.COLOR_BGR2RGB)

    #Goruntude el izleme islemi yapiyor
    results = hands.process(img_rgb)

    if results.multi_hand_landmarks:
        for hand_landmarks in results.multi_hand_landmarks:
            #Elde edilen konumlandirma noktalarini ciziyoruz
            mpDraw.draw_landmarks(img, hand_landmarks , mpHand.HAND_CONNECTIONS)

    lmList = []
    for id ,lm in enumerate(hand_landmarks.landmark):
        h , w , c = img.shape
        cx = lm.x * w
        cy = lm.y * h
        lmList.append([id , cx , cy])
        # [8,10,7]
        # parmak id , x , y
    
    if len(lmList) != 0:
        fingers = []

        #Basparmak kontrolu yalnizca sag el !!!

        if lmList(tip_ids[0])[1] > lmList[pip_ids[0]][1]:
            fingers.append(1)
        else:
            fingers.append(0)

        total_fingers = fingers.count(1)
        cv2.putText(img, f'Acik Parmak: {total_fingers}', (30,125), cv2.FONT_HERSHEY_PLAIN, 10 , (255,0,0), 8)

        for i in range(1,5):
            if lmList[tip_ids[i]][2] < lmList[pip_ids[i]][2]:
                fingers.append(1)
            else:
                fingers.append(0)
                print(fingers)

