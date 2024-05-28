import logging

folder = "/home/ubnt/Desktop/python/pythonDay4/pythonData/"
def main():
    logger = logging.getLogger("myapp")
    hdlr = logging.FileHandler("myapp.log")
    formatter = logging.Formatter('%(asctime)s %(levelname)s %(proceed)s %(message)s')
    hdlr.setFormatter(formatter)
    logger.addHandler(hdlr)
    logger.setLevel(logging.INFO)

    logger.error("에러가 발생하였습니다.")
    logger.info("시작입니다.")
    logger.info("테스트가 끝났습니다.")
if __name__ == "__main__":
    main()