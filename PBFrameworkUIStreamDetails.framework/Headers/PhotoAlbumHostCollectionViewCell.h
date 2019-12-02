//
//  PhotoAlbumHostCollectionViewCell.h
//  PhotoButler
//
//  Created by Mirant on 15/02/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoAlbumHostCollectionViewCell : UICollectionViewCell

@property (retain,nonatomic) IBOutlet UILabel *lblName;
@property (retain,nonatomic) IBOutlet UILabel *lblStatus;
@property (retain,nonatomic) IBOutlet UIImageView *imgPerson;
@property (retain,nonatomic) IBOutlet UIView *viewStopContainer;
@property (retain,nonatomic) IBOutlet UIView *viewCrownContainer;
@property (retain,nonatomic) IBOutlet UIImageView *imgCrown;
@property (retain,nonatomic) IBOutlet UIButton *btnStop;

// Streaming to X / Y people
@property (retain,nonatomic) IBOutlet UIView *viewForStreamSignalLogo;
@property (retain,nonatomic) IBOutlet UIView *viewForStreamSignalWithLabel;
@property (retain,nonatomic) IBOutlet UIImageView *imgStreamLogo;
@property (retain,nonatomic) IBOutlet UILabel *lblSignalFirstLabel;
@property (retain,nonatomic) IBOutlet UILabel *lblSignalSecondLabel;
@property (nonatomic) IBOutlet NSLayoutConstraint *constraintStopButtonPosition;

-(void) hideStop;
-(void) showStop;
-(IBAction)pressStop:(id)sender;

@end
