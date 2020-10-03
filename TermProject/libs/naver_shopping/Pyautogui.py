import pyautogui


print(pyautogui.position())
pyautogui.screenshot('inch75.png', region=(480, 408, 70,40))

#inch75 = pyautogui.locateCenterOnScreen('inch75.png')
#pyautogui.click(inch75)

#inch55 = pyautogui.locateCenterOnScreen(x=393, y=406)