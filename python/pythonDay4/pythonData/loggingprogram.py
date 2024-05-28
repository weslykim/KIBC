import logging
import logging.config
import csv

def main():
    folder = "/home/ubnt/Desktop/python/pythonDay4/pythonData/" 
    logging.config.fileConfig(folder + 'logging.conf')
    logger = logging.getLogger()

    logger.info(f"Open file Test")

if __name__ == "__main__":
    main()