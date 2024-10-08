@import Foundation;

@interface LCSharedUtils : NSObject

+ (NSString *)certificatePassword;
+ (BOOL)launchToGuestApp;
+ (BOOL)launchToGuestAppWithURL:(NSURL *)url;
+ (void)setWebPageUrlForNextLaunch:(NSString*)urlString;
@end
