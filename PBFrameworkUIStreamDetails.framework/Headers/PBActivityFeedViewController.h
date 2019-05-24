//
//  PBActivityFeedViewController.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11/7/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBActivityFeedViewController : UIViewController

@property (nonatomic) NSString *photoStreamId;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSDate *startDate;
@property (nonatomic) NSDate *endDate;

@end

NS_ASSUME_NONNULL_END
