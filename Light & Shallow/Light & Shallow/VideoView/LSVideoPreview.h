//
//  LSVideoPreview.h
//  Light & Shallow
//
//  Created by 王珑宾 on 2018/10/11.
//  Copyright © 2018年 Ronb X. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

typedef void (^FocusBlock) (CGPoint point);
typedef void (^ExposureBlock) (CGPoint point);
typedef void(^FocalizeAdjustmentBlock)(CGFloat scale);

@interface LSVideoPreview : UIView
@property (nonatomic, strong, readonly) CALayer* previewLayer;
@property (nonatomic, assign) LSCanvasRatio canvasRatio;
@property (nonatomic, strong) id imageContents;
@property (nonatomic,   copy) FocusBlock focusBlock;
@property (nonatomic,   copy) ExposureBlock exposureBlock;
@property (nonatomic,   copy) FocalizeAdjustmentBlock focalizeAdjustmentBlock;
@end
