import cs50
from PIL import Image, ImageFilter #type: ignore

before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.bmp")