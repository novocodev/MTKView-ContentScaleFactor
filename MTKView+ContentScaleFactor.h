//
//  NSView+ContentScaleFactor.h
//  voĉo
//
//  Created by Andrew Reslan on 08/06/2016.
//  Copyright © 2016 Novoĉo. All rights reserved.
//

#ifdef __APPLE__

#include "TargetConditionals.h"

#if TARGET_OS_IPHONE
    // ios provides MTKView.contentScaleFactor
#elif TARGET_OS_MAC

@import MetalKit;

@interface MTKView (ContentScaleFactor)

@property(nonatomic) CGFloat contentScaleFactor;

@end

#endif

#endif