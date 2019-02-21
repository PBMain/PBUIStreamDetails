//
//  PBTabBarButton.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/23/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBTabBarButton : UIButton

@property (nonatomic, strong) UIColor *defaultTitleColor;
@property (nonatomic, strong) UIColor *selectedTitleColor;

@property (nonatomic, assign) BOOL needToAddGradientBackground;

@end

NS_ASSUME_NONNULL_END
