//
//  PBCircleView.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/21/18.
//

#import <UIKit/UIKit.h>
#import "PBCustomPageControlConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface PBCircleView : UIView

@property (nonatomic, assign) CGFloat heightBeginToRefresh;

@property (nonatomic, strong) UIImageView *activityIndicatorImageView;

@end

NS_ASSUME_NONNULL_END
