# 각 햄버거와 음료의 가격을 입력받습니다.
burger_prices = [int(input()) for _ in range(3)]  # 상덕버거, 중덕버거, 하덕버거
drink_prices = [int(input()) for _ in range(2)]  # 콜라, 사이다

# 가장 싼 햄버거와 가장 싼 음료의 가격을 찾습니다.
min_burger_price = min(burger_prices)
min_drink_price = min(drink_prices)

# 세트 메뉴의 가격은 가장 싼 햄버거 + 가장 싼 음료 - 50원 할인
set_menu_price = min_burger_price + min_drink_price - 50

# 결과 출력
print(set_menu_price)