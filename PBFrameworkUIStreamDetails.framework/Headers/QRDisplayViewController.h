//
//  QRDisplayViewController.h
//  AFNetworking
//
//  Created by Philippe Belley on 7/14/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface QRDisplayViewController : UIViewController
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *imageQRCode;
@property (nonatomic) NSString* url;
@property (nonatomic) NSString* token;
@property (nonatomic) NSString* streamID;
@end

NS_ASSUME_NONNULL_END
