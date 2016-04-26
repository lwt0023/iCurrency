//
//  MainViewController.h
//  iCurrency
//
//  Created by 陆文韬 on 16/3/14.
//  Copyright © 2016年 LunTao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *sourceCurrencyFlag;
@property (weak, nonatomic) IBOutlet UILabel *sourceCurrencyName;
@property (weak, nonatomic) IBOutlet UILabel *sourceCurrencyUnit;
@property (weak, nonatomic) IBOutlet UITextField *sourceCurrencyInputField;
@property (weak, nonatomic) IBOutlet UIView *sourceCurrencyView;
@property (weak, nonatomic) IBOutlet UILabel *lastUpdateTime;

@property (weak, nonatomic) IBOutlet UIView *convertView;

@property (weak, nonatomic) IBOutlet UIView *baseView;

//view转跳的方法
- (void)jumpToAdd;
- (void)jumpToSetting;
@end
