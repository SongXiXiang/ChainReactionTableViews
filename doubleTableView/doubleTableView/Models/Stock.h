//
//  stock.h
//  doubleTableView
//
//  Created by tarena13 on 15/10/14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Stock : NSObject

@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *number;
@property (nonatomic,strong) NSArray *data;

@end
