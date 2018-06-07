#import <UIKit/UIKit.h>

@interface CustomCoverImages : NSObject
{
    
}

@property (nonatomic) NSMutableDictionary *uploadedPhotos;
@property (nonatomic) NSMutableArray *latestStreams;

+(instancetype)sharedDelegate;

+(UIImage*)getCustomCoverForStream:(NSString*)streamID;
+(void)setCustomCover:(UIImage*)img withFilename:(NSString*)filename creationDate:(NSString*)creationDate assetID:(NSString*)assetID forStream:(NSString*)streamID;
+(void)deleteImageForStream:(NSString*)streamID;
+(void)deleteAllImages;

@end
