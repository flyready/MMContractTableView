//
//  GroupModel.h
//  TableView收缩
//
//  Created by 张明 on 17/3/21.
//  Copyright © 2017年 MM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GroupModel : NSObject
@property (nonatomic, assign)BOOL isOpened;
@property (nonatomic, retain)NSString *groupName;
@property (nonatomic, assign)NSInteger groupCount;

@property (nonatomic, retain)NSArray *groupFriends;
@end
