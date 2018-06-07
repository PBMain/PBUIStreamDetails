//
//  EditUpcomingPhotoStream.h
//  PhotoButler
//
//  Created by Mirant on 10/03/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditUpcomingPhotoStream : UIViewController<UITableViewDelegate,UITableViewDataSource>{
    IBOutlet UIImageView *imgConfetti;
    IBOutlet UIView *viewNavigation;
    IBOutlet UIView *viewForTimeManageTable;
}
@property (nonatomic) NSString *albumId;

@property (retain,nonatomic) IBOutlet UITableView *tblMainStreamVIew;
@property (retain,nonatomic) IBOutlet UITableView *tblTimeManage;

@end
