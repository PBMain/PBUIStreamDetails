//
//  EnableNotificationInRSVP.h
//  PhotoButler
//
//  Created by Mirant on 02/03/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EnableNotificationInRSVPDelegate <NSObject>

-(void)hideMethod;

@end

@interface EnableNotificationInRSVP : UIView

@property (retain,nonatomic) IBOutlet UILabel *lblInst1;
@property (retain,nonatomic) IBOutlet UILabel *lblInst2;

@property (retain,nonatomic) IBOutlet UIView *viewMain;
@property (retain,nonatomic) IBOutlet UIView *viewNavigation;
@property (retain,nonatomic) IBOutlet UIView *viewWithGradient;
@property (retain,nonatomic) IBOutlet UIImageView *imgAlarm;
@property (retain,nonatomic) IBOutlet UIImageView *imgBulb;

@property (retain,nonatomic) IBOutlet UIButton *btnClose;
@property (retain,nonatomic) IBOutlet UIButton *btnSettings;

@property(nonatomic) id <EnableNotificationInRSVPDelegate> delegate;
@end
