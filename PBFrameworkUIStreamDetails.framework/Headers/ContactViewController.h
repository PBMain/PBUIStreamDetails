//
//  ContactViewController.h
//  PhotoButler
//
//  Created by Mirant Patel on 11/08/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CollaborateStream.h"

@class LoadingView;

@interface NSString (emailValidation)
-(BOOL)isValidEmail;
@end

@protocol ContactViewControllerDelegate <NSObject>

- (void)setHeightByCount:(NSMutableArray *)arraySelected isEmail:(BOOL)isEmail;
- (void)setHeightByCount:(NSMutableArray *)arraySelected;

@end

@interface ContactViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate,UICollectionViewDelegate,UICollectionViewDataSource,CollaborateStreamDelegate>{
    IBOutlet UIButton *btnForAddContact;
    IBOutlet UILabel *lblEmailSearchInst1;
    IBOutlet UIView *viewForSelectedName;
}

@property (nonatomic) LoadingView *loadingView;
@property (nonatomic) NSTimer *loadingTimer;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) IBOutlet UIView *loadingViewContainer;
@property (strong, nonatomic) NSMutableDictionary *hashContact;

@property (nonatomic, weak) id <ContactViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITableView *tblContact;
@property (strong, nonatomic) IBOutlet UICollectionView *colvContactSelected;
@property (strong, nonatomic) IBOutlet UILabel *lblFrequentlySharedWith;
@property (strong, nonatomic) IBOutlet NSMutableArray *arrayFrequentlyDisplayed;
@property (strong, nonatomic) IBOutlet NSMutableArray *arrayWhitelistPhones;

@property (nonatomic) BOOL lastNewStream;
@property (nonatomic) BOOL isEmail;
@property (nonatomic) BOOL isNotPhone;
@property (nonatomic) BOOL isNotEmail;
@property (nonatomic) int keyboardSpace;
@property (nonatomic) NSString *albumId;

@property (strong, nonatomic) IBOutlet UILabel *lblTitleMain;
@property (strong, nonatomic) IBOutlet UILabel *lblForNotFoundInst;

@property (strong, nonatomic) IBOutlet UIButton *btnShare;
@property (strong, nonatomic) IBOutlet UIButton *btnBack;

@property (weak, nonatomic) IBOutlet UIView *viewNavigationBar;
@property (weak, nonatomic) IBOutlet UIView *viewSafeArea;
@property (weak, nonatomic) IBOutlet UIView *viewForStartTyping;
@property (weak, nonatomic) IBOutlet UIView *viewForContactAccess;
@property (weak, nonatomic) IBOutlet UIView *viewForCollectionView;

@property (weak, nonatomic) IBOutlet UITextField *txtForSearch;

@property (weak, nonatomic) IBOutlet UIImageView *imgForSearch;
@property (weak, nonatomic) IBOutlet UIImageView *imgForMainImageSearch;

-(IBAction)pressCancel:(id)sender;

@end
