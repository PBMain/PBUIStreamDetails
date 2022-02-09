//
//  TutorialChangeBGViewController.h
//  PBPodUIStreamDetails
//
//  Created by Nikita Khodzhaiev on 30.04.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialDelegate <NSObject>
- (void) didSelectUpload;
- (void) didSelectChangeBG;
- (void) cancel;
@end

@interface TutorialChangeBGViewController : UIViewController

@property (nonatomic, weak) id <TutorialDelegate> delegate;

- (void) dismissAll;
+ (BOOL) didShowTutorial;
+ (void) setDidShowConstant;

@end

NS_ASSUME_NONNULL_END
