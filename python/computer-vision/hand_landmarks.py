import mediapipe as mp
import cv2
import time


mpHand = mp.solutions.hands
hands = mpHand.Hands()
mpDraw = mp.solutions.drawing_utils

cap = cv2.VideoCapture(0)

while True:
    _ , img =cap.read()

    #cv2 da BGR formati alinan goruntuyu RGB ye cevirir!!
    img_rgb = cv2.cvtColor(img , cv2.COLOR_BGR2RGB)

    #Goruntude el izleme islemi yapiyor
    results = hands.process(img_rgb)

    #Eger elimi algiladiysan her bir elin konumlandirma boktalarini ciz
    if results.multi_hand_landmarks:
        for hand_landmarks in results.multi_hand_landmarks:
            #Elde edilen konumlandirma noktalarini ciziyoruz
            mpDraw.draw_landmarks(img, hand_landmarks , mpHand.HAND_CONNECTIONS)

    cv2.imshow("Kamera", img)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
