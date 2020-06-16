//
//  TutorialListViewController.h
//  PBPodUIStreamDetails
//
//  Created by Nikita Khodzhaiev on 30.04.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TutorialListViewController : UIViewController
@property (nonatomic, copy) void (^didOk)(void);

@end

NS_ASSUME_NONNULL_END
