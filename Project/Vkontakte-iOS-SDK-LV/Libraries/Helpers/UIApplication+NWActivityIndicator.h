//
//  UIApplication+NWActivityIndicator.h
//
//  Add and delete network activity indicator at status bar.
//

#import <Foundation/Foundation.h>

@interface UIApplication (NWActivityIndicator)
- (NSInteger)networkActivityIndicator:(BOOL)visible;
- (NSInteger)networkActivityIndicator:(BOOL)visible withThread:(NSThread *)thread;
@end
