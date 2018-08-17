//
//  PBMapAnnotation.h
//  PBPodUIStreamDetails
//
//  Created by PhotoButler on 6/20/18.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface PBMapAnnotation : NSObject <MKAnnotation>

// Required part of MKAnnotation protocol
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

// Custom PB values.
@property (nonatomic, nullable) NSString* category;
@property (nonatomic) NSString* pinNumber;
@property (nonatomic) NSString* locationName;
@property (nonatomic) NSString* categoryAssetCount;
@property (nonatomic) NSString* imageUrl;

// Init with a starting value.
- (id) initWithCoordinate:(CLLocationCoordinate2D)coord category: (NSString*)cat pinNumber:(NSString*)pin locationName:(NSString*)name imageUrl:(NSString*)url;

@end
