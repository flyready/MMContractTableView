//
//  MMCell.h
//  TableView收缩
//
//  Created by 张明 on 17/3/21.
//  Copyright © 2017年 MM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *avatarIV;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;

@property (weak, nonatomic) IBOutlet UILabel *shuoshuoLabel;
@end
