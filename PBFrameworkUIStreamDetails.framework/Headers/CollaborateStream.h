//
//  CollaborateStream.h
//  PhotoButler
//
//  Created by Mirant on 17/01/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CollaborateStreamDelegate
- (void)setHeightByCount:(NSMutableArray *)arraySelected1;
@end

@interface CollaborateStream : UIViewController<UITableViewDelegate,UITableViewDataSource>{
    IBOutlet UIImageView *imgConfetti;
    IBOutlet UIImageView *imgUser;
}

@property (weak, nonatomic) IBOutlet UISwitch *switchAll;

@property (weak, nonatomic) IBOutlet UITableView *tblData;

@property (weak, nonatomic) IBOutlet UIView *viewMainScroll;

@property (weak, nonatomic) IBOutlet UILabel *lblInst1;
@property (weak, nonatomic) IBOutlet UILabel *lblInst2;

@property (weak, nonatomic) IBOutlet UILabel *lblTitleMain;
@property (weak, nonatomic) IBOutlet UIView *viewNavigationBar;
@property (nonatomic) id <CollaborateStreamDelegate> delegate;
@property (nonatomic) NSMutableArray *arraySelected;
@property (nonatomic) NSString *albumId;

@end
