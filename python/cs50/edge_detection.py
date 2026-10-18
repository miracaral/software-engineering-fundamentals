import cs50 # type: ignore
import PIL # type: ignore
from PIL import Image, ImageFilter # type: ignore

before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out.bmp")