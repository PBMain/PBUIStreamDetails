//
//  RSVPViewController.h
//  PhotoButler
//
//  Created by Mirant on 02/03/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RSVPViewController : UIViewController{
    IBOutlet UIImageView *imgBackground;
    IBOutlet UIImageView *imgLine1;
    IBOutlet UIImageView *imgLine2;
}

@property (retain,nonatomic) NSString *albumTitle;
@property (retain,nonatomic) NSString *albumId;
@property (retain,nonatomic) NSDictionary *album;
@property (retain,nonatomic) NSString *hostUserId;
@property (retain,nonatomic) NSString *hostPersonId;
@property (retain,nonatomic) NSDate *startDate;
@property (retain,nonatomic) NSDate *endDate;
@property (retain,nonatomic) NSString *personId;
@property (retain,nonatomic) NSString *hostName;
@property (retain,nonatomic) NSString *inviteCode;
@property (nonatomic, assign) BOOL isContributor;
@property (nonatomic) BOOL hasLoadedBlankImages;

@property (retain,nonatomic) NSTimer *timerClock;

@property (nonatomic) BOOL canPressConfirm;

@property (retain,nonatomic) IBOutlet UIView *viewMain;
@property (retain,nonatomic) IBOutlet UIView *viewForRSVP;
@property (retain,nonatomic) IBOutlet UIView *viewForThanks;

@property (retain,nonatomic) IBOutlet UIView *viewForThanksConfirmedButton;
@property (retain,nonatomic) IBOutlet UIImageView *imgRightIcon;
@property (retain,nonatomic) IBOutlet UIButton *btnConfirmed;
@property (retain,nonatomic) IBOutlet UILabel *lblConfirmed;
@property (retain,nonatomic) IBOutlet UIButton *btnConfirm;
@property (retain,nonatomic) IBOutlet UILabel *lblThanks;

@property (retain,nonatomic) IBOutlet UIImageView *imgProfile;
@property (retain,nonatomic) IBOutlet UILabel *lblForHostName;
@property (retain,nonatomic) IBOutlet UILabel *lblForHostName1;

@property (retain,nonatomic) IBOutlet UILabel *lblForDays;
@property (retain,nonatomic) IBOutlet UILabel *lblForHours;
@property (retain,nonatomic) IBOutlet UILabel *lblForMinutes;
@property (retain,nonatomic) IBOutlet UILabel *lblForSeconds;

@property (retain,nonatomic) IBOutlet UILabel *lblForDateRange;
@property (retain,nonatomic) IBOutlet UILabel *lblRSVP;
@property (retain,nonatomic) IBOutlet UILabel *lblJoinStream;

@property (retain,nonatomic) IBOutlet UILabel *lblForTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblForSubTitle;

@property (retain,nonatomic) IBOutlet UIView *viewForNavigation;
@property (retain,nonatomic) IBOutlet UIButton *buttonForJoinTheStream;

@property (nonatomic) int tickCount;

-(void)hideMethod;

@end
