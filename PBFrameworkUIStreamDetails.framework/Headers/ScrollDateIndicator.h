//
//  ScrollDateIndicator.h
//  PhotoButler
//
//  Created by Philippe Belley on 8/17/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScrollDateIndicator : UIView
@property (weak, nonatomic) IBOutlet UILabel *lblTime;
@property (weak, nonatomic) IBOutlet UILabel *lblDate;
@property (weak, nonatomic) IBOutlet UIImageView *imgTimeDisplay;

@end
