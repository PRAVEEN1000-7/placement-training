import cv2

video = cv2.VideoCapture(0) 

while True :
    istrue,frame = video.read() 
    
    cv2.imshow('using front camera :',frame)
    
    if cv2.waitKey(1) & 0xFF == ord('c'): 
        break

video.release() 
cv2.destroyAllWindows()
