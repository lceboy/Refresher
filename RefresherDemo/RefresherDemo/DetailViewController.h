//
//  DetailViewController.h
//  RefresherDemo
//
//  Created by bing on 2017/3/14.
//  Copyright © 2017年 Ji Fen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RefresherDemo+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

