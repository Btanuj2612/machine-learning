#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import cv2
import pickle
import os
import numpy as np

if not os.path.exists('data/'):
    os.makedirs('data/')
    
video =cv2.VideoCapture(0)
facedetect =cv2.CascadeClassifier(cv2.data.haarcascades+'haarcascade_frontalface_default.xml')
face_data =[]

i=0
name =input("enter your aadhar number:")
framesTotal=101
captureAfterFrame=2
while True:
    ret,frame=video.read()
    gray=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    faces=facedetect.detectMultiScale(gray,1.3,5)
    for(x,y,w,h) in faces:
        crop_img=frame[y:y+h,x:x+w]
        resized_img=cv2.resize(crop_img,(50,50))
        if len(face_data)<= framesTotal and i%captureAfterFrame==0:
            face_data.append(resized_img)
        i=i+1 
        cv2.putText(frame,str(len(face_data)),(50,50),cv2.FONT_HERSHEY_COMPLEX,1,(50,50,255),1)
        cv2.rectangle(frame,(x,y),(x+w,y+h),(50,40,255),1)
    cv2.imshow('frame',frame)
    k=cv2.waitKey(1)
    if k== ord('q')or len(face_data)>=framesTotal:
        break
    



# In[4]:




