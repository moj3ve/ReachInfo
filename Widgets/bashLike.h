//
//  bashLike.h
//  ReachInfo
//
//  Created by 1di4r on 7/31/20.
//  Copyright © 2020 1di4r. All rights reserved.
//

#import "../Tweak.h"
#import "Widget.h"
#include <sys/sysctl.h>
#include <ifaddrs.h>
#include <arpa/inet.h>

@interface bashLike : Widget
-(void)show;
-(NSTimeInterval)uptime;
-(NSString *)getIPAddress;
@end


