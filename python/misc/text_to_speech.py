import pyttsx3

engine = pyttsx3.init()

engine.setProperty('rate',150)
engine.setProperty('volume',0.75)

text = "Hello, This is a text-to-speech conversion using Python3! And I'm Mirach Aral"
engine.say(text)

engine.runAndWait()