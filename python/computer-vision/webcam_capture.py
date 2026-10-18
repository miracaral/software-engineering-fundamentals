import cv2

# Kamerayi baslatmak icin
cap = cv2.VideoCapture(0)

while True:
    # Kameradan goruntu almak icin
    ret , img = cap.read()
    
    cv2.putText(img, "Merhaba bu benim ilk kamera gosterme projem" , (30,125) , cv2.FONT_HERSHEY_PLAIN , 3 ,(255,0,0), 5 )
    cv2.imshow("Kamera", img)
    cv2.waitKey(1)

cap.release()
cv2.destroyAllWindows()
