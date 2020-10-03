from bs4 import BeautifulSoup

def getCartegoryMaker(html):
    soup = BeautifulSoup(html, "html.parser")
    cartegory_div = soup.find("div", {"class": "filter_finder_filter__1DTIN"})
    makerCartegorySpace = cartegory_div.find("div", {"class": "filter_finder_col__3ttPW filter_is_fixed__1i_lw"})
    makerCartegorys = makerCartegorySpace.findAll('span',{'class':'filter_text_over__3zD9c'})
    cartegoryMaker=[]
    for makerCartegory in makerCartegorys:
        try:
            cartegoryMaker.append(makerCartegory.text)
        except:
            print("Error")
    return cartegoryMaker

def getCartegoryScreenSize(html):
    soup = BeautifulSoup(html, "html.parser")

    cartegory_div = soup.select('#__next > div > div.container > div.style_inner__18zZX > div.filter_finder__1Gtei > div.filter_finder_filter__1DTIN > div:nth-child(4) > div.filter_finder_row__1rXWv > div > ul')

    cartegoryScreen = []
    for screenSize in cartegory_div:
        try:
            cartegoryScreen.append(screenSize.text.split())
        except:
            print("Error")
    return cartegoryScreen

def getCartegoryShape(html):
    soup = BeautifulSoup(html, "html.parser")
    cartegory_div = soup.find("div", {"class": "filter_finder_filter__1DTIN"})
    shapeCartegorySpace = cartegory_div.find("ul", {"class": "filter_finder_list__16XU5"})
    shapeCartegories = shapeCartegorySpace.findAll('span', {'class': 'filter_text_over__3zD9c'})
    cartegoryShape = []
    for shapeCartegory in shapeCartegories:
        try:
            cartegoryShape.append(shapeCartegory.text)
        except:
            print("Error")
    return cartegoryShape