//
//  DataSlider.h
//  CustomSlider
//
//  Created by bear on 2021/5/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class DataSlider;

@protocol DataSliderDelegate <NSObject>
@optional

/** 传回 VC
 *
 Value :当前滑块值
 moduleName : 当前滑块名字
 stateBool : 滑动动画状态
 */

- (void)composeToolDataSliderDataValue:(float )Value moduleName:(NSString *)moduleName slidingState:(BOOL )stateBool;

@end

@interface DataSlider : UIView <CAAnimationDelegate>

/** 滑块名字 */
@property (nonatomic, strong) NSString *moduleName;

/** 滑块最小值 */
@property (nonatomic, assign) float minValue;

/** 滑块最大值 */
@property (nonatomic, assign) float maxValue;

/** 滑块预设值 */
@property (nonatomic, assign) float initialValue;

/** 滑块名字 是否显示 yes : 显示  no : 不显示 */
@property (nonatomic, assign) BOOL sliderNameHidden;

/** 滑条背景色 */
@property (nonatomic, strong) UIColor *sliderBG;

/** 滑动块颜色 */
@property (nonatomic, strong) UIColor *roundBG;

/** 代理 */
@property (nonatomic, weak) id<DataSliderDelegate> delegate;

@end


NS_ASSUME_NONNULL_END
