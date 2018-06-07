//
//  ContributorSpectatorViewController.h
//  PhotoButler
//
//  Created by Mirant on 27/12/16.
//  Copyright © 2016 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InviteCodeMenu.h"

@interface NSString(EmojiExtension)
- (NSString*)removeEmoji;
@end

@interface PhotoStreamRecipients : UIViewController <UITableViewDelegate, UITableViewDataSource, InviteCodeMenuDelegate> {
    IBOutlet UIImageView *imgConfetti;
    IBOutlet UIView *viewNavigation;
    IBOutlet UIView *viewNavigationSafeArea;
    IBOutlet UIButton *btnBack;
    UIAlertAction *saveAction;
    InviteCodeMenu *vanityCodeMenu;
    NSString *vanityCodeNew;
}

@property (retain,nonatomic) IBOutlet UITableView *tblViewForSpectator;
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblSubTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblInviteCodeTitle;
@property (retain,nonatomic) IBOutlet UIButton *btnInvite;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *widthEditButton;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *widthSeparator;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *widthLabelInviteCode;

@property (retain,nonatomic) NSMutableArray *arrayRecipients;
@property (assign,nonatomic) int peopleInvited;
@property (assign,nonatomic) int peopleViewed;
@property (assign,nonatomic) NSString *albumPhotoStreamId;
@property (assign,nonatomic) NSString *albumName;
@property (assign,nonatomic) NSString *albumShareId;
@property (assign,nonatomic) NSString *ownerUserId;
@property (assign,nonatomic) NSString *inviteCode;
@property (assign, nonatomic) BOOL isPrivacyConcern;
@property (assign,nonatomic) BOOL isHost;

// Vanity Invite Codes
@property (retain,nonatomic) IBOutlet UIView *viewRegCode;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *layoutRegCodeHeight;
@property (retain,nonatomic) IBOutlet UILabel *lblInviteCode;
@property (retain,nonatomic) IBOutlet UIButton *btnEditInviteCode;
@property (retain,nonatomic) IBOutlet UIButton *btnInviteCode;
@property (retain,nonatomic) IBOutlet UIButton *btnOpenInviteMenu;

-(IBAction)pressEditInviteCode:(id)sender;
-(IBAction)pressCopyInviteCode:(id)sender;
-(IBAction)pressOpenInviteMenu:(id)sender;

@end
