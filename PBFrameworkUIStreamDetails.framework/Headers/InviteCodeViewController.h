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
    IBOutlet UIButton *btnNext;
}

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *viewContent;

@property (retain,nonatomic) IBOutlet UITextField *txtSecretCode;
@property (retain,nonatomic) IBOutlet UIView *viewForNavigation;

-(IBAction)btnBack:(id)sender;

@end
