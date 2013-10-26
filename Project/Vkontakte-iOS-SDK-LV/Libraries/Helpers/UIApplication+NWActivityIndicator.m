//
//  UIApplication+NWActivityIndicator.m
//

#import "UIApplication+NWActivityIndicator.h"

@implementation UIApplication (NWActivityIndicator)
- (NSInteger)networkActivityIndicator:(BOOL)visible
{
	static NSInteger count = 0;
	
	if(visible)
	{
		count++;
	}
	else
	{
		count--;
	}
	
	if(count > 0)
	{
		self.networkActivityIndicatorVisible = YES;
	}
	else
	{
		self.networkActivityIndicatorVisible = NO;
		count = 0;
	}
	
	return count;
}

- (NSInteger)networkActivityIndicator:(BOOL)visible withThread:(NSThread *)thread
{
	NSInteger count = [self networkActivityIndicator:visible];
	[thread start];
	return count;
}
@end
