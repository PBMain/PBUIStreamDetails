//
//  RSVPViewController.h
//  PhotoButler
//
//  Created by Mirant on 02/03/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OneButtonMenu.h"
#import "OptInModeSelectionView.h"

@interface RSVPViewController : UIViewController <OneButtonMenuDelegate, OptInModeSelectionDelegate> {
    IBOutlet UIImageView *imgBackground;
    IBOutlet UIImageView *imgLine1;
    IBOutlet UIImageView *imgLine2;
}

@property (retain,nonatomic) NSString *albumTitle;
@property (retain,nonatomic) NSString *albumId;
@property (retain,nonatomic) NSString *folderID;
@property (retain,nonatomic) NSDictionary *folder;
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
@property (nonatomic) UIImage *coverImage;

@property (retain,nonatomic) NSTimer *timerClock;

@property (nonatomic) BOOL canPressConfirm;

@property (retain,nonatomic) IBOutlet UIView *viewMain;
@property (retain,nonatomic) IBOutlet UIView *viewForRSVP;
@property (retain,nonatomic) IBOutlet UIButton *btnContributeMenu;
@property (retain,nonatomic) IBOutlet UIView *viewOrangeCircle;
@property (retain,nonatomic) IBOutlet UIView *viewInfoBubble;
@property (retain,nonatomic) IBOutlet UILabel *lblInfoText;
@property (retain,nonatomic) IBOutlet UILabel *lblBottomTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblBottomSubtitle;

@property (retain,nonatomic) IBOutlet UIImageView *imgProfile;
@property (retain,nonatomic) IBOutlet UILabel *lblForHostName;
@property (retain,nonatomic) IBOutlet UILabel *lblForHostName1;

@property (retain,nonatomic) IBOutlet UILabel *lblForDays;
@property (retain,nonatomic) IBOutlet UILabel *lblForHours;
@property (retain,nonatomic) IBOutlet UILabel *lblForMinutes;
@property (retain,nonatomic) IBOutlet UILabel *lblForSeconds;

@property (retain,nonatomic) IBOutlet UILabel *lblForDateRange;

@property (retain,nonatomic) IBOutlet UILabel *lblForTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblForSubTitle;

@property (retain,nonatomic) IBOutlet UIView *viewForNavigation;
@property (retain,nonatomic) IBOutlet UIView *viewSafeArea;
@property (retain,nonatomic) IBOutlet UIButton *buttonBack;

@property (nonatomic) IBOutlet UIView *vOneButtonMenuInnerContainer;
@property (nonatomic) IBOutlet UIImageView *imgOneButtonMenuInner;

@property (nonatomic) int tickCount;

-(void)hideMethod;

@end
