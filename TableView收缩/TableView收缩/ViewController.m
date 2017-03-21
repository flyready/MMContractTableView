//
//  ViewController.m
//  TableView收缩
//
//  Created by 张明 on 17/3/21.
//  Copyright © 2017年 MM. All rights reserved.
//

#import "ViewController.h"
#import "MMTableViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (IBAction)btnClick:(id)sender
{
    MMTableViewController *tabVc = [[MMTableViewController alloc] init];
    [self.navigationController pushViewController:tabVc animated:YES];
}


@end
