//
//  InviteCodeViewController.h
//  PhotoButler
//
//  Created by Mirant on 02/03/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InviteCodeViewController : UIViewController<UITextFieldDelegate>{
    IBOutlet UIImageView *imgConfetti;
    IBOutlet UIImageView *imgLogo;
}

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *viewContent;

@property (retain,nonatomic) IBOutlet UIButton *btnNext;
@property (retain,nonatomic) IBOutlet UIButton *btnBack;
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UITextField *txtSecretCode;
@property (retain,nonatomic) IBOutlet UIView *viewForNavigation;
@property (retain,nonatomic) IBOutlet UIView *viewSafeArea;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressNext:(id)sender;

@end
