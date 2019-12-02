//
//  InviteCodeViewController.h
//  PhotoButler
//
//  Created by Mirant on 02/03/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QRScannerViewController.h"
@interface InviteCodeViewController : UIViewController<UITextFieldDelegate, QRScannerProtocol>{
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
@property (weak, nonatomic) IBOutlet UIButton *btnScanQRCode;

@property (nonatomic) NSString *folderID;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressNext:(id)sender;

@end
