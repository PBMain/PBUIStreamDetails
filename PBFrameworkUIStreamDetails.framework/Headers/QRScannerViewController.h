//
//  QRScannerViewController.h
//  AFNetworking
//
//  Created by Philippe Belley on 7/16/19.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
NS_ASSUME_NONNULL_BEGIN

@protocol QRScannerProtocol
- (void)codeFound : (NSString*) code;
@end

@interface QRScannerViewController : UIViewController<AVCaptureMetadataOutputObjectsDelegate>
@property (strong, nonatomic) IBOutlet UIView *viewforCamera;
@property (strong, nonatomic) IBOutlet UIButton *btnCancel;
@property (nonatomic, strong) AVCaptureSession *captureSession;
@property (nonatomic) NSString *codeInText;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, weak) id<QRScannerProtocol> delegate;
@end

NS_ASSUME_NONNULL_END
