
/*!
 *  @header BAKit.h
 *          BABaseProject
 *
 *  @brief  BAKit
 *
 *  @author 博爱
 *  @copyright    Copyright © 2016年 博爱. All rights reserved.
 *  @version    V1.0
 */

//                            _ooOoo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                            O\ = /O
//                        ____/`---'\____
//                      .   ' \\| |// `.
//                       / \\||| : |||// \
//                     / _||||| -:- |||||- \
//                       | | \\\ - /// | |
//                     | \_| ''\---/'' | |
//                      \ .-\__ `-` ___/-. /
//                   ___`. .' /--.--\ `. . __
//                ."" '< `.___\_<|>_/___.' >'"".
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                 \ \ `-. \_ __\ /__ _/ .-` / /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//
//         .............................................
//                  佛祖镇楼                  BUG辟易
//          佛曰:
//                  写字楼里写字间，写字间里程序员；
//                  程序人员写程序，又拿程序换酒钱。
//                  酒醒只在网上坐，酒醉还来网下眠；
//                  酒醉酒醒日复日，网上网下年复年。
//                  但愿老死电脑间，不愿鞠躬老板前；
//                  奔驰宝马贵者趣，公交自行程序员。
//                  别人笑我忒疯癫，我笑自己命太贱；
//                  不见满街漂亮妹，哪个归得程序员？

/*
 
 *********************************************************************************
 *
 * 在使用BAKit的过程中如果出现bug请及时以以下任意一种方式联系我，我会及时修复bug
 *
 * QQ     : 可以添加ios开发技术群 479663605 在这里找到我(博爱1616【137361770】)
 * 微博    : 博爱1616
 * Email  : 137361770@qq.com
 * GitHub : https://github.com/boai
 * 博客    : http://boaihome.com
 
 *********************************************************************************
 
 */ //  博爱 UIKit 类封装

#ifndef BAKit_UIKit_h
#define BAKit_UIKit_h


#pragma mark - UIView 封装
#import "BAKit_UIView.h"

#pragma mark 手势 封装
#import "UIView+BAGesture.h"
#import "UIGestureRecognizer+BAOpertation.h"

//#import "UIScrollView+BAKit.h"
#import "UIScrollView+BAFrame.h"

#pragma mark - UITableView 封装
#import "BAKit_UITableView.h"

#pragma mark - UIViewController 封装
#import "UIViewController+BABottomLine.h"
#import "UIViewController+BAKit.h"
#import "UIViewController+BACustomBackButton.h"

#pragma mark - UIColor 封装
#import "UIColor+BAKit.h"

#pragma mark - UIAlertController 封装
#import "UIAlertController+BAKit.h"

#pragma mark - UITextField 封装
#import "BATextField.h"

#pragma mark - UITextView 封装
#import "UITextView+BAKit.h"

#pragma mark - WKWebView 封装
#import "BAKit_WebView.h"

#pragma mark - UIImage 封装
#import "UIImageEffects.h"
#import "UIImage+BARender.h"
#import "UIImage+BAColor.h"
#import "UIImage+ImageEffects.h"

#pragma mark - UIImageView 封装
#import "UIImageView+BAAnimation.h"


#pragma mark - UIAlertController 封装
#import "BAAlertController.h"

#pragma mark - UIAlertAction 封装
#import "UIAlertAction+BAKit.h"

#pragma mark - UIButton 封装
#import "BAButton.h"

#pragma mark - UIDevice 封装
#import "UIDevice+BAKit.h"

#pragma mark - UITabBarController
#import "UITabBarController+BAKit.h"
#import "UITabBarItem+BAKit.h"
#import "UITabBar+BABadge.h"

#pragma mark - UIBarButtonItem 封装
#import "UIBarButtonItem+BABadge.h"
#import "UIBarButtonItem+BAKit.h"

#pragma mark - CALayer 动画
#import "CALayer+BAAnimation.h"
#import "CABasicAnimation+BAKit.h"
#import "CALayer+BAFrame.h"

#pragma mark - CAShapeLayer 封装
#import "CAShapeLayer+BACornerRadius.h"


#pragma mark - UILabel 封装
#import "BAKit_UILabel.h"


#pragma mark - UIFont 封装
#import "UIFont+BAKit.h"

#pragma mark - UINavigationBar 封装
#import "UINavigationBar+BAKit.h"

#pragma mark - BAKit_UIApplication
#import "BAKit_UIApplication.h"


#endif /* BAKit_UIKit_h */
