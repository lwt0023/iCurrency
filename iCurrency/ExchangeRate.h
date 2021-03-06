//
//  ExchangeRate.h
//  iCurrency
//
//  Created by 陆文韬 on 16/3/8.
//  Copyright © 2016年 LunTao. All rights reserved.
//

/*
 用于处理汇率转换，从输入的当前国家汇率转换成相对应其他国家的汇率的方法。
 
 */

#import <Foundation/Foundation.h>

@interface ExchangeRate : NSObject//<NSCoding>

@property (nonatomic,copy)NSString *baseCurrencyName;
@property (nonatomic,copy)NSMutableDictionary *rates;
@property (nonatomic,copy)NSDate *lastUpdated;


- (double)convertRate:(NSString *)baseCurrencyName
                   to:(NSString *)targetCurrencyName
                 with:(float)number;

//对rates的存储
- (void)saveRates;
- (void)loadRates;


@end
