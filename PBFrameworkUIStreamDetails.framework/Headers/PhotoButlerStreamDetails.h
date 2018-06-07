@import UIKit;

// Delegates
@protocol PhotoButlerPermissionDelegate <NSObject>
-(void)permissionDeniedCamera;
-(void)permissionDeniedLibrary;
@end

@protocol PhotoButlerNavigationDelegate <NSObject>
-(BOOL)navigateToViewController:(UIViewController*)vc;
@end

@interface PhotoButlerStreamDetails : NSObject {
    
}

// Requirements
-(void)initWithClientId:(NSString*)clientId clientKey:(NSString*)clientKey completion:(void (^)(BOOL success))completionBlock;
-(void)createNewPBUserSession:(NSString*)firstName lastName:(NSString*)lastName phoneNumber:(NSString*)phoneNumber emailAddress:(NSString*)emailAddress completion:(void (^)(NSString *message))completionBlock;
-(void)restoreExistingUserSession:(NSString*)pbId completion:(void (^)(NSString *message))completionBlock;
-(void)getStreamDetailsView:(NSString*)streamId includeHeader:(BOOL)includeHeader completion:(void (^)(UIView* v))completionBlock;
-(void)getStreamDetailsViewController:(NSString*)streamId completion:(void (^)(UIViewController* vc))completionBlock;

// User
-(NSString*) getPBID;
-(void) setPBID:(NSString*)pbId;

// Loading
-(void)preloadStreamSummary:(NSString*)streamId completion:(void (^)(id response))completionBlock;
-(void)preloadStreamImageList:(NSString*)streamId completion:(void (^)(id response))completionBlock;

// Uploads
+(void)startUploads;

// Customization
+(void)setNavigationBarColor:(UIColor*)tintColor;
+(void)setNavigationBarItemsColor:(UIColor*)tintColor;
+(void)setNavigationSubBarColor:(UIColor*)tintColor;
+(void)setNavigationSubBarItemsColor:(UIColor*)tintColor;
//+(void)setFontNameNormal:(NSString*)fontName;
//+(void)setFontNameMedium:(NSString*)fontName;
//+(void)setFontNameSemiBold:(NSString*)fontName;
//+(void)setFontNameBold:(NSString*)fontName;
+(void)setUsePhotoButlerPermissionsViews:(BOOL)usePBPermissions;
//-(void)showDebugLogs:(BOOL)showLogs;

// Facebook
+ (void)facebookApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
+ (BOOL)facebookApplication:(UIApplication *)application openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
+ (void)facebookActivate;

@end
