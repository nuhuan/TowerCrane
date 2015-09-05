//
//  BreakrulesTableViewCell.h
//  塔机监控
//
//  Created by WangPF on 15/5/19.
//  Copyright (c) 2015年 com.GongYou.TowerCrane. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BreakRuleDelegate <NSObject>

- (void)selectBreakRuleDetails:(NSIndexPath *)indexPath;
- (void)sendMessage;

@end

@interface BreakrulesTableViewCell : UITableViewCell

@property(nonatomic,assign) id<BreakRuleDelegate> delegate;

@end
