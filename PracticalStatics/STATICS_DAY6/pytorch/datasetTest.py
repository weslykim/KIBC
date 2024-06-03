import pandas as pd
import torch
from torch.utils.data import Dataset, DataLoader

class MyDataset(Dataset):
    def __init__(self, csv_file):
        self.lavel = pd.read_csv(csv_file)
    def __len__(self):
        return len(self.lavel)
    def __getitem__(self, index):
        smaple = torch.tensor(self.lavel.iloc[index, 0:3]).int()
        label = torch.tensor(self.lavel.iloc[index, 3]).int()     
        
def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/STATICS_DAY6/pytorch/data/"
    tensor_dataset = MyDataset(folder + "iris.data")
    dataset = DataLoader(tensor_dataset, batch_size = 100, shuffle = True)

    #train dataset
    train_dataset = DataLoader(tensor_dataset, batch_size = 100, shuffle = True)

    # validation dataset
    val_dataset = DataLoader(tensor_dataset, batch_size = 100, shuffle = True)

if __name__ == "__main__":
    main()